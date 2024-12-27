//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSData, NSString, RTIDocumentState, RTIDocumentTraits, RTIInputOperation, RTIInputSystemSession, RTISessionOptions, RTISupplementalLexicon, TISupplementalLexicon;

@protocol RTIInputSystemSessionDelegate <NSObject>

@optional
- (void)inputSession:(RTIInputSystemSession *)arg1 performInputOperation:(RTIInputOperation *)arg2 withResponse:(void (^)(unsigned long long))arg3;
- (void)inputSession:(RTIInputSystemSession *)arg1 performInputOperation:(RTIInputOperation *)arg2;
- (void)inputSession:(RTIInputSystemSession *)arg1 didRemoveRTISupplementalLexicon:(RTISupplementalLexicon *)arg2;
- (void)inputSession:(RTIInputSystemSession *)arg1 didAddRTISupplementalLexicon:(RTISupplementalLexicon *)arg2;
- (void)inputSession:(RTIInputSystemSession *)arg1 didRemoveSupplementalLexicon:(TISupplementalLexicon *)arg2;
- (void)inputSession:(RTIInputSystemSession *)arg1 didAddSupplementalLexicon:(TISupplementalLexicon *)arg2;
- (void)inputSession:(RTIInputSystemSession *)arg1 textSuggestionsChanged:(NSData *)arg2;
- (void)inputSession:(RTIInputSystemSession *)arg1 didChangePause:(_Bool)arg2 withReason:(NSString *)arg3;
- (void)inputSession:(RTIInputSystemSession *)arg1 documentStateDidChange:(RTIDocumentState *)arg2;
- (void)inputSession:(RTIInputSystemSession *)arg1 documentTraitsDidChange:(RTIDocumentTraits *)arg2;
- (void)inputSessionDidDie:(RTIInputSystemSession *)arg1;
- (void)inputSessionDidEnd:(RTIInputSystemSession *)arg1 options:(RTISessionOptions *)arg2 completion:(void (^)(void))arg3;
- (void)inputSessionDidEnd:(RTIInputSystemSession *)arg1 options:(RTISessionOptions *)arg2;
- (void)inputSessionDidEnd:(RTIInputSystemSession *)arg1;
- (void)inputSessionDidBegin:(RTIInputSystemSession *)arg1 options:(RTISessionOptions *)arg2;
- (void)inputSessionDidBegin:(RTIInputSystemSession *)arg1;
- (void)prepareForInputSession:(RTIInputSystemSession *)arg1 options:(RTISessionOptions *)arg2;
@end

