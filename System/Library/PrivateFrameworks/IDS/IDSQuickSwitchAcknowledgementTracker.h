//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface IDSQuickSwitchAcknowledgementTracker : NSObject
{
    NSMutableSet *_delegateIdentifiers;	// 8 = 0x8
    struct _opaque_pthread_mutex_t _delegateIdentifiersMutex;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000879c7
- (void)_accessDelegateIdentifiersInCriticalSectionWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000008797c
- (void)stopAwaitingAcknowledgementFromAllServiceDelegates;	// IMP=0x000000000008782e
- (void)stopAwaitingAcknowledgementFromServiceDelegateWithIdentifier:(id)arg1;	// IMP=0x000000000008766b
- (id)identifierForServiceDelegate:(id)arg1;	// IMP=0x0000000000087511
- (id)awaitAcknowledgementFromServiceDelegate:(id)arg1;	// IMP=0x000000000008726c
@property(readonly, nonatomic) _Bool isAwaitingAcknowledgement;
- (void)dealloc;	// IMP=0x0000000000087161
- (id)init;	// IMP=0x0000000000087086

@end

