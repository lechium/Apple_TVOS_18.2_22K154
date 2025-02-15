//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "VSAsyncOperation.h"

@class NSArray, VSAccountStore, VSOptional;

__attribute__((visibility("hidden")))
@interface VSCredentialSaveOperation : VSAsyncOperation
{
    VSOptional *_result;	// 8 = 0x8
    NSArray *_unsavedAccounts;	// 16 = 0x10
    VSAccountStore *_accountStore;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000394f4
@property(retain, nonatomic) VSAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property(copy, nonatomic) NSArray *unsavedAccounts; // @synthesize unsavedAccounts=_unsavedAccounts;
@property(retain, nonatomic) VSOptional *result; // @synthesize result=_result;
- (void)executionDidBegin;	// IMP=0x00000000000392dc
- (void)_didSaveAccounts:(id)arg1 withResult:(_Bool)arg2 error:(id)arg3;	// IMP=0x000000000003907d
- (id)initWithUnsavedAccounts:(id)arg1 accountStore:(id)arg2;	// IMP=0x0000000000038f51
- (id)init;	// IMP=0x0000000000038ee2

@end

