//
//  TrackView.h
//  iTunesMatchHelper
//
//  Created by Nathan Villaescusa on 9/9/12.
//
//

#import <Cocoa/Cocoa.h>

@class RowData;

@interface TrackView : NSView <NSTableViewDelegate,NSTableViewDataSource>

@property (nonatomic, assign) __strong RowData *rowData;
@property (nonatomic, assign) __strong NSTableView *tableView;
@end
