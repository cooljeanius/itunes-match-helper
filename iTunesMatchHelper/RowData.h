//
//  RowData.h
//  iTunesMatchHelper
//
//  Created by Nathan Villaescusa on 9/8/12.
//
//

#import <Foundation/Foundation.h>
#import "iTunes.h"

@interface RowData : NSObject

@property (nonatomic, assign) BOOL isChecked;
@property (nonatomic, assign) BOOL isDifferent;
@property (nonatomic, assign) NSUInteger trackId;
@property (nonatomic, assign) /*__strong*/ iTunesFileTrack *fileTrack;
@property (nonatomic, assign) /*__strong*/ NSDictionary *officialInfo;

@end
