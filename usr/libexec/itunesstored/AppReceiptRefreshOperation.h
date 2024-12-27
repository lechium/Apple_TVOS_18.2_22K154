//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class AppReceiptOperationResult, AppReceiptRefreshOperationOptions, NSArray;

@interface AppReceiptRefreshOperation : ISOperation
{
    NSArray *_familyAccountIDs;	// 96 = 0x60
    AppReceiptOperationResult *_operationResult;	// 104 = 0x68
    AppReceiptRefreshOperationOptions *_options;	// 112 = 0x70
    CDUnknownBlockType _resultsBlock;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x0020000000101b61
- (_Bool)_refreshReceiptForApplication:(id)arg1 withOptions:(id)arg2 vppState:(long long)arg3 error:(id *)arg4;	// IMP=0x00100000001013da
- (id)_postBodyDataWithApplication:(id)arg1 options:(id)arg2 vppState:(long long)arg3 error:(id *)arg4;	// IMP=0x001000000010069a
- (id)_optionsWithVPPState:(long long)arg1;	// IMP=0x00100000001005d5
- (_Bool)_preformMigrationCheckForApp:(id)arg1;	// IMP=0x00100000001005cd
- (_Bool)_handleResponse:(id)arg1 forApp:(id)arg2 options:(id)arg3;	// IMP=0x00100000000ff4f7
- (id)receiptExpirationDateForProxy:(id)arg1;	// IMP=0x00100000000ff462
- (void)setResultsBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000ff3eb
- (void)run;	// IMP=0x00100000000febf6
- (id)initWithOptions:(id)arg1;	// IMP=0x00100000000feb10

@end

