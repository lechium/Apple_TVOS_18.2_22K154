//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (MCExtension)
+ (id)MCErrorWithDomain:(id)arg1 code:(long long)arg2 descriptionArray:(id)arg3 suggestion:(id)arg4 USEnglishSuggestion:(id)arg5 underlyingError:(id)arg6 errorType:(id)arg7 extraUserInfo:(id)arg8;	// IMP=0x008000000000cb03
+ (id)MCErrorWithDomain:(id)arg1 code:(long long)arg2 descriptionArray:(id)arg3 suggestion:(id)arg4 USEnglishSuggestion:(id)arg5 underlyingError:(id)arg6 errorType:(id)arg7;	// IMP=0x008000000000cace
+ (id)MCErrorWithDomain:(id)arg1 code:(long long)arg2 descriptionArray:(id)arg3 underlyingError:(id)arg4 errorType:(id)arg5;	// IMP=0x008000000000caa6
+ (id)MCErrorWithDomain:(id)arg1 code:(long long)arg2 descriptionArray:(id)arg3 errorType:(id)arg4;	// IMP=0x008000000000ca7c
- (id)MCErrorType;	// IMP=0x001000000000d883
- (id)MCUSEnglishSuggestion;	// IMP=0x001000000000d82c
- (id)MCUSEnglishDescription;	// IMP=0x001000000000d7d5
- (_Bool)MCContainsErrorDomain:(id)arg1 code:(long long)arg2;	// IMP=0x001000000000d694
- (id)MCCopyAsPrimaryError;	// IMP=0x001000000000d59a
- (id)MCFindPrimaryError;	// IMP=0x001000000000d418
- (id)MCVerboseDescription;	// IMP=0x001000000000cfdf
@end

