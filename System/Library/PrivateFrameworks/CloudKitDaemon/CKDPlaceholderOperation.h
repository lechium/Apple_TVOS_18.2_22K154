//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class CKDContainer, CKDOperation, NSDate, NSObject, NSOperationQueue, NSString;
@protocol OS_dispatch_group;

@interface CKDPlaceholderOperation : NSOperation
{
    NSObject<OS_dispatch_group> *_group;	// 8 = 0x8
    int _executionState;	// 16 = 0x10
    NSDate *_startDate;	// 24 = 0x18
    CKDOperation *_realOperation;	// 32 = 0x20
    NSOperationQueue *_targetOperationQueue;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000002a583e
@property(readonly, nonatomic) NSOperationQueue *targetOperationQueue; // @synthesize targetOperationQueue=_targetOperationQueue;
@property(readonly, nonatomic) CKDOperation *realOperation; // @synthesize realOperation=_realOperation;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (id)statusReportWithIndent:(unsigned long long)arg1;	// IMP=0x00000000002a562f
- (id)_startDateString;	// IMP=0x00000000002a54c7
- (id)description;	// IMP=0x00000000002a54b5
- (id)CKDescriptionPropertiesWithPublic:(_Bool)arg1 private:(_Bool)arg2 shouldExpand:(_Bool)arg3;	// IMP=0x00000000002a523e
- (id)ckShortDescription;	// IMP=0x00000000002a51b6
- (void)cancel;	// IMP=0x00000000002a5065
- (void)transitionToFinished;	// IMP=0x00000000002a5051
- (void)transitionToExecuting;	// IMP=0x00000000002a503d
- (_Bool)isExecuting;	// IMP=0x00000000002a502c
- (_Bool)isFinished;	// IMP=0x00000000002a501b
- (_Bool)isConcurrent;	// IMP=0x00000000002a5013
- (void)main;	// IMP=0x00000000002a49e0
- (void)start;	// IMP=0x00000000002a482b
@property(readonly, nonatomic) NSString *operationID;
@property(readonly, nonatomic) __weak CKDContainer *container;
- (id)initWithOperation:(id)arg1 targetOperationQueue:(id)arg2;	// IMP=0x00000000002a45c8

@end

