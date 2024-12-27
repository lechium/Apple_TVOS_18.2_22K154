//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKDURLRequest.h"

@class NSArray, NSMutableDictionary;

@interface CKDDiscoverUserIdentitiesURLRequest : CKDURLRequest
{
    _Bool _wantsProtectionInfo;	// 8 = 0x8
    _Bool _adopterProvidedLookupInfos;	// 9 = 0x9
    CDUnknownBlockType _progressBlock;	// 16 = 0x10
    NSArray *_infosToDiscover;	// 24 = 0x18
    NSMutableDictionary *_submittedInfos;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000002bb63a
@property(readonly, nonatomic) _Bool adopterProvidedLookupInfos; // @synthesize adopterProvidedLookupInfos=_adopterProvidedLookupInfos;
@property(readonly, nonatomic) NSMutableDictionary *submittedInfos; // @synthesize submittedInfos=_submittedInfos;
@property(readonly, nonatomic) NSArray *infosToDiscover; // @synthesize infosToDiscover=_infosToDiscover;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(nonatomic) _Bool wantsProtectionInfo; // @synthesize wantsProtectionInfo=_wantsProtectionInfo;
- (void)requestDidParseNodeFailure:(id)arg1;	// IMP=0x00000000002bb374
- (id)requestDidParseProtobufObject:(id)arg1;	// IMP=0x00000000002ba6d7
- (id)generateRequestOperations;	// IMP=0x00000000002ba495
- (id)requestOperationClasses;	// IMP=0x00000000002ba429
- (long long)databaseScope;	// IMP=0x00000000002ba41e
- (void)fillOutEquivalencyPropertiesBuilder:(id)arg1;	// IMP=0x00000000002ba321
- (id)initWithOperation:(id)arg1 lookupInfos:(id)arg2 adopterProvidedLookupInfos:(_Bool)arg3;	// IMP=0x00000000002ba276

@end

