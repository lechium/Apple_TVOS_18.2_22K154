//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol BFFNavigationControllerDelegate;

__attribute__((visibility("hidden")))
@interface BFFNavigationObserver : NSObject
{
    id <BFFNavigationControllerDelegate> _observer;	// 8 = 0x8
}

+ (id)observerWithObserver:(id)arg1;	// IMP=0x006000000000ccd8
- (void).cxx_destruct;	// IMP=0x000000000000cd4c
@property(nonatomic) __weak id <BFFNavigationControllerDelegate> observer; // @synthesize observer=_observer;

@end

