//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface VOTCustomActionCategory : NSObject
{
    NSString *_categoryName;	// 8 = 0x8
    NSMutableArray *_actions;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000001107a3
@property(readonly, nonatomic) NSMutableArray *actions; // @synthesize actions=_actions;
@property(retain, nonatomic) NSString *categoryName; // @synthesize categoryName=_categoryName;
- (id)init;	// IMP=0x001000000011071d

@end

