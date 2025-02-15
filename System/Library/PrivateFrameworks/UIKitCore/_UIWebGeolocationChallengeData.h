//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL, UIView;
@protocol WebAllowDenyPolicyListener;

__attribute__((visibility("hidden")))
@interface _UIWebGeolocationChallengeData : NSObject
{
    NSString *_userVisibleDomain;	// 8 = 0x8
    NSString *_token;	// 16 = 0x10
    NSURL *_requestingURL;	// 24 = 0x18
    UIView *_view;	// 32 = 0x20
    id <WebAllowDenyPolicyListener> _listener;	// 40 = 0x28
}

@property(retain, nonatomic) id <WebAllowDenyPolicyListener> listener; // @synthesize listener=_listener;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
@property(retain, nonatomic) NSURL *requestingURL; // @synthesize requestingURL=_requestingURL;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
@property(retain, nonatomic) NSString *userVisibleDomain; // @synthesize userVisibleDomain=_userVisibleDomain;
- (void)dealloc;	// IMP=0x0000000001793e4e

@end

