//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (PNError_Extension)
+ (id)pn_genericErrorWithUnderlyingError:(id)arg1 localizedDescription:(id)arg2;	// IMP=0x00800000000106db
+ (id)pn_genericErrorWithLocalizedDescription:(id)arg1;	// IMP=0x00800000000105fa
+ (id)pn_errorWithCode:(long long)arg1 localizedDescription:(id)arg2;	// IMP=0x00800000000104c3
+ (id)pn_genericErrorWithMultipleUnderlyingErrors:(id)arg1 localizedDescription:(id)arg2;	// IMP=0x00800000000103f2
+ (id)_pn_genericErrorWithUnderlyingError:(id)arg1 localizedDescription:(id)arg2;	// IMP=0x008000000001031f
@end

