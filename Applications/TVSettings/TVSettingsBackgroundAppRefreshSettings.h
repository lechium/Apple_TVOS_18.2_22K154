//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface TVSettingsBackgroundAppRefreshSettings : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    NSString *_displayName;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000002a3d0
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) _Bool allowsBackgroundAppRefresh;
- (void)setAllowsBackgroundAppRefresh:(_Bool)arg1;	// IMP=0x001000000002a11d
- (unsigned long long)hash;	// IMP=0x001000000002a014
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000029f64
- (id)initWithIdentifier:(id)arg1;	// IMP=0x0010000000029ef9

@end

