//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CNAccountsAndGroupsSection : NSObject
{
    NSString *_title;	// 8 = 0x8
    NSArray *_items;	// 16 = 0x10
    CDUnknownBlockType _titleProvider;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000ad81f
@property(copy, nonatomic) CDUnknownBlockType titleProvider; // @synthesize titleProvider=_titleProvider;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;

@end

