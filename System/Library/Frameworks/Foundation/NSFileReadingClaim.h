//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSFileAccessNode, NSURL;

__attribute__((visibility("hidden")))
@interface NSFileReadingClaim
{
    NSURL *_url;	// 208 = 0xd0
    _Bool _urlDidChange;	// 216 = 0xd8
    unsigned long long _options;	// 224 = 0xe0
    NSFileAccessNode *_location;	// 232 = 0xe8
    NSFileAccessNode *_rootNode;	// 240 = 0xf0
    long long _linkResolutionCount;	// 248 = 0xf8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000910696
- (void)protectFilesAgainstEviction;	// IMP=0x0000000000911abd
- (_Bool)shouldCancelInsteadOfWaiting;	// IMP=0x0000000000911aa7
- (id)allURLs;	// IMP=0x0000000000911a7c
- (_Bool)shouldBeRevokedPriorToInvokingAccessor;	// IMP=0x0000000000911a67
- (_Bool)blocksClaim:(id)arg1;	// IMP=0x0000000000911a39
- (void)itemAtLocation:(id)arg1 wasReplacedByItemAtLocation:(id)arg2;	// IMP=0x00000000009119db
- (void)devalueSelf;	// IMP=0x00000000009118fd
- (void)invokeClaimer;	// IMP=0x00000000009115d3
- (void)resolveURLThenMaybeContinueInvokingClaimer:(CDUnknownBlockType)arg1;	// IMP=0x000000000091125e
- (void)granted;	// IMP=0x0000000000910cf2
- (_Bool)isBlockedByWritingItemAtLocation:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x0000000000910c9d
- (_Bool)isBlockedByReadingItemAtLocation:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x0000000000910c95
- (_Bool)evaluateSelfWithRootNode:(id)arg1 checkSubarbitrability:(_Bool)arg2;	// IMP=0x0000000000910aee
- (void)forwardUsingConnection:(id)arg1 crashHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000091069e
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000091054f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000910436
- (void)dealloc;	// IMP=0x00000000009103d1
- (id)initWithPurposeID:(id)arg1 url:(id)arg2 options:(unsigned long long)arg3 claimer:(CDUnknownBlockType)arg4;	// IMP=0x0000000000910343

@end

