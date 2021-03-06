//
//  nosleep_preferences.h
//  nosleep-preferences
//
//  Created by Pavel Prokofiev on 4/2/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <PreferencePanes/PreferencePanes.h>
#import <NoSleep/NoSleepInterfaceWrapper.h>

//#import "AuthorizationService.h"

@interface NoSleepPreferences : NSPreferencePane <NoSleepNotificationDelegate> {
@private
    NoSleepInterfaceWrapper *m_noSleepInterface;
    BOOL stateAC;
    BOOL stateBattery;
    
    IBOutlet NSButton *m_checkBoxEnableAC;
    IBOutlet NSButton *m_checkBoxEnableBattery;
    IBOutlet NSButton *m_checkBoxShowIcon;
    
    IBOutlet NSTextField *m_lastUpdateDate;
    
    //AuthorizationService *authService;
}

- (void)updateEnableState;

- (IBAction)checkboxEnableACClicked:(id)sender;
- (IBAction)checkboxEnableBatteryClicked:(id)sender;
- (IBAction)checkboxShowIconClicked:(id)sender;

@property (assign) BOOL isBWEnabled;
@property (assign) BOOL toLockScreen;
@property (assign) BOOL useDoubleClick;

- (IBAction)updateNow:(id)sender;
- (BOOL)autoUpdate;
- (void)setAutoUpdate:(BOOL)value;
- (NSString *)lastUpdateDate;

@end
