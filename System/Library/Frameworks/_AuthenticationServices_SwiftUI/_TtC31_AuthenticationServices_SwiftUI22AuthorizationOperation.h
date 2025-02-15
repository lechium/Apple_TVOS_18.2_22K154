//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC31_AuthenticationServices_SwiftUI22AuthorizationOperation : NSOperation
{
    MISSING_TYPE *authorizationCompletionHandler;	// 8 = 0x8
    MISSING_TYPE *presentationAnchorProvider;	// 24 = 0x18
    MISSING_TYPE *requestContext;	// 40 = 0x28
    MISSING_TYPE *stateStorage;	// 56 = 0x38
    MISSING_TYPE *authorizationController;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000006a30
- (id)init;	// IMP=0x00000000000069d0
- (void)authorizationController:(id)arg1 didCompleteWithError:(id)arg2;	// IMP=0x0000000000006950
- (void)authorizationController:(id)arg1 didCompleteWithCustomMethod:(id)arg2;	// IMP=0x00000000000068d0
- (void)authorizationController:(id)arg1 didCompleteWithAuthorization:(id)arg2;	// IMP=0x0000000000006820
- (_Bool)isFinished;	// IMP=0x0000000000006590
- (_Bool)isExecuting;	// IMP=0x00000000000064d0
- (_Bool)isAsynchronous;	// IMP=0x00000000000064c0
- (void)start;	// IMP=0x0000000000006490
- (id)presentationAnchorForAuthorizationController:(id)arg1;	// IMP=0x0000000000006af0

// Remaining properties
@property(nonatomic, readonly) _Bool asynchronous;
@property(nonatomic, readonly) _Bool executing;
@property(nonatomic, readonly) _Bool finished;

@end

