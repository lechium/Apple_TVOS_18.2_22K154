//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (DMCUtilities)
+ (id)DMCErrorWithDomain:(id)arg1 code:(long long)arg2 descriptionArray:(id)arg3 suggestion:(id)arg4 USEnglishSuggestion:(id)arg5 underlyingError:(id)arg6 errorType:(id)arg7 addtionalUserInfo:(id)arg8;	// IMP=0x008000000000d629
+ (id)DMCErrorWithDomain:(id)arg1 code:(long long)arg2 descriptionArray:(id)arg3 suggestion:(id)arg4 USEnglishSuggestion:(id)arg5 underlyingError:(id)arg6 errorType:(id)arg7;	// IMP=0x008000000000d5f4
+ (id)DMCErrorWithDomain:(id)arg1 code:(long long)arg2 descriptionArray:(id)arg3 underlyingError:(id)arg4 errorType:(id)arg5;	// IMP=0x008000000000d5cd
+ (id)DMCErrorWithDomain:(id)arg1 code:(long long)arg2 descriptionArray:(id)arg3 errorType:(id)arg4;	// IMP=0x008000000000d5a3
- (id)DMCCopyAsPrimaryError;	// IMP=0x001000000000e2a8
- (_Bool)DMCContainsErrorDomain:(id)arg1 code:(long long)arg2;	// IMP=0x001000000000e167
- (id)DMCFindPrimaryError;	// IMP=0x001000000000dfe5
- (id)DMCVerboseDescription;	// IMP=0x001000000000dbac
- (id)DMCErrorType;	// IMP=0x001000000000db52
- (id)DMCUSEnglishSuggestion;	// IMP=0x001000000000dafb
- (id)DMCUSEnglishDescription;	// IMP=0x001000000000daa4
@end

