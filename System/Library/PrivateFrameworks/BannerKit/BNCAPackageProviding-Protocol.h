//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BannerKit/NSObject-Protocol.h>
#import <BannerKit/NSSecureCoding-Protocol.h>

@class NSBundle, NSString;

@protocol BNCAPackageProviding <NSObject, NSSecureCoding>
@property(readonly, copy, nonatomic) NSString *state;
@property(readonly, copy, nonatomic) NSBundle *bundle;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, nonatomic, getter=isCAPackageProvider) _Bool caPackageProvider;
@end

