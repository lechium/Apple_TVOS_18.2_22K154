//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIView;

__attribute__((visibility("hidden")))
@interface UIKBAutoFillTestTagRequest : NSObject
{
    long long _requestType;	// 8 = 0x8
    UIView *_view;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000bb4bb9
@property(readonly, nonatomic) UIView *view; // @synthesize view=_view;
@property(readonly, nonatomic) long long requestType; // @synthesize requestType=_requestType;
- (id)initWithRequestType:(long long)arg1 view:(id)arg2;	// IMP=0x0000000000bb4b1c

@end

