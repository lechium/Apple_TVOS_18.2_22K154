//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SecurityFoundation/NSCopying-Protocol.h>
#import <SecurityFoundation/NSObject-Protocol.h>
#import <SecurityFoundation/NSSecureCoding-Protocol.h>

@class _SFSymmetricKey, _SFSymmetricKeySpecifier;

@protocol SFKeyDerivingOperation <NSObject, NSCopying, NSSecureCoding>
+ (long long)keySource;
- (_SFSymmetricKey *)deriveKeyWithSpecifier:(_SFSymmetricKeySpecifier *)arg1 fromKeySource:(id)arg2 error:(id *)arg3;
@end

