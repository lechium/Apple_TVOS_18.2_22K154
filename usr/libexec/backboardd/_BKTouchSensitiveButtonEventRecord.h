//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableIndexSet, NSSet;

@interface _BKTouchSensitiveButtonEventRecord : NSObject
{
    unsigned int _stage;	// 8 = 0x8
    NSMutableIndexSet *_stagesEntered;	// 16 = 0x10
    NSSet *_destinations;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000001c687
- (id)init;	// IMP=0x001000000001c631

@end

