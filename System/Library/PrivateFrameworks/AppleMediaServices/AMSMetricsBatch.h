//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccount, NSArray, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface AMSMetricsBatch : NSObject
{
    _Bool _anonymous;	// 8 = 0x8
    _Bool _containsLoadURL;	// 9 = 0x9
    ACAccount *_account;	// 16 = 0x10
    NSString *_canaryIdentifier;	// 24 = 0x18
    NSArray *_droppedEvents;	// 32 = 0x20
    NSArray *_eventDictionaries;	// 40 = 0x28
    NSArray *_events;	// 48 = 0x30
    NSURL *_reportURL;	// 56 = 0x38
    NSArray *_skippedEvents;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000042b8d2
@property(retain, nonatomic) NSArray *skippedEvents; // @synthesize skippedEvents=_skippedEvents;
@property(retain, nonatomic) NSURL *reportURL; // @synthesize reportURL=_reportURL;
@property(retain, nonatomic) NSArray *events; // @synthesize events=_events;
@property(retain, nonatomic) NSArray *eventDictionaries; // @synthesize eventDictionaries=_eventDictionaries;
@property(retain, nonatomic) NSArray *droppedEvents; // @synthesize droppedEvents=_droppedEvents;
@property(nonatomic) _Bool containsLoadURL; // @synthesize containsLoadURL=_containsLoadURL;
@property(retain, nonatomic) NSString *canaryIdentifier; // @synthesize canaryIdentifier=_canaryIdentifier;
@property(nonatomic) _Bool anonymous; // @synthesize anonymous=_anonymous;
@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;

@end

