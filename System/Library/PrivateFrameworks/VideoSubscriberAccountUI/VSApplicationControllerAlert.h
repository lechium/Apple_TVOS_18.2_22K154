//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface VSApplicationControllerAlert : NSObject
{
    NSString *_title;	// 8 = 0x8
    NSString *_message;	// 16 = 0x10
    NSArray *_actions;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000007113c
@property(retain, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;

@end

