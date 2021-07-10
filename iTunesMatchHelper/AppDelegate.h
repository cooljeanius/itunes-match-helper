//
//  AppDelegate.h
//  iTunesMatchHelper
//
//  Created by Kevin Vinck on 17-12-11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@class TrackView;

#import "iTunes.h"

@interface AppDelegate : NSObject <NSApplicationDelegate,NSTableViewDelegate,NSTableViewDataSource>

@property (assign) IBOutlet NSWindow *window;
@property (assign) /*__weak*/ IBOutlet NSProgressIndicator *progressBar;
@property (assign) /*__weak*/ IBOutlet NSTextField *progressLabel;
@property (assign) /*__weak*/ IBOutlet NSTableView *songTable;
@property (assign) /*__weak*/ IBOutlet NSButton *scanButton;

@property (assign) /*__weak*/ IBOutlet NSTextField *trackIdLabel;
@property (assign) /*__weak*/ IBOutlet NSTextField *countryCodeLabel;

- (IBAction)fetchLibrary:(id)sender;
- (IBAction)checkAllItems:(id)sender;
- (IBAction)uncheckAllItems:(id)sender;

@property (assign) /*__weak*/ IBOutlet NSTableView *trackTableView;
@property (assign) /*__weak*/ IBOutlet TrackView *trackView;

@end
