//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKDURLRequest.h"

@class NSArray, NSDictionary, NSMutableDictionary;

@interface CKDFetchMergeableDeltaMetadataURLRequest : CKDURLRequest
{
    NSArray *_mergeableValueIDs;	// 8 = 0x8
    NSDictionary *_continuationTokens;	// 16 = 0x10
    CDUnknownBlockType _metadataFetchedBlock;	// 24 = 0x18
    NSMutableDictionary *_mergeableValueIDByRequestID;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000339e4d
@property(retain, nonatomic) NSMutableDictionary *mergeableValueIDByRequestID; // @synthesize mergeableValueIDByRequestID=_mergeableValueIDByRequestID;
@property(copy, nonatomic) CDUnknownBlockType metadataFetchedBlock; // @synthesize metadataFetchedBlock=_metadataFetchedBlock;
@property(retain, nonatomic) NSDictionary *continuationTokens; // @synthesize continuationTokens=_continuationTokens;
@property(retain, nonatomic) NSArray *mergeableValueIDs; // @synthesize mergeableValueIDs=_mergeableValueIDs;
- (void)requestDidParseNodeFailure:(id)arg1;	// IMP=0x0000000000339a9b
- (id)requestDidParseProtobufObject:(id)arg1;	// IMP=0x00000000003391be
- (id)generateRequestOperations;	// IMP=0x0000000000338ae5
- (id)anonymousUserIDForHTTPHeader;	// IMP=0x0000000000338a6b
- (_Bool)handlesAnonymousCKUserIDPropagation;	// IMP=0x0000000000338a63
- (int)isolationLevel;	// IMP=0x0000000000338a58
- (id)requestOperationClasses;	// IMP=0x00000000003389ec
- (id)zoneIDsToLock;	// IMP=0x0000000000338922
- (_Bool)allowsAnonymousAccount;	// IMP=0x0000000000338908
- (void)fillOutRequestProperties:(id)arg1;	// IMP=0x0000000000338877
- (void)fillOutEquivalencyPropertiesBuilder:(id)arg1;	// IMP=0x000000000033878f
- (id)initWithOperation:(id)arg1 mergeableValueIDs:(id)arg2 continuationTokens:(id)arg3;	// IMP=0x00000000003386b6

@end

