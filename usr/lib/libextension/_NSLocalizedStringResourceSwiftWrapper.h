//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSLocale, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface _NSLocalizedStringResourceSwiftWrapper : NSObject
{
    MISSING_TYPE *wrapped;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000004b85a0
- (void).cxx_destruct;	// IMP=0x00000000004b9b60
- (id)init;	// IMP=0x00000000004b9b00
- (id)localizeWithOptions:(id)arg1;	// IMP=0x00000000004b9910
- (id)localize;	// IMP=0x00000000004b9340
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000004b8e70
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000004b8840
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004b8510
- (id)copyWithZone:(void *)arg1;	// IMP=0x00000000004b7f40
- (id)initWithKey:(id)arg1 defaultValue:(id)arg2 table:(id)arg3 locale:(id)arg4 bundleURL:(id)arg5;	// IMP=0x00000000004b7dd0
@property(nonatomic, readonly) NSString *description;
@property(nonatomic, copy) NSLocale *locale;
@property(nonatomic, readonly) NSURL *bundleURL;
@property(nonatomic, readonly) NSString *table;
@property(nonatomic, readonly) NSString *defaultValue;
@property(nonatomic, readonly) NSString *key;

@end

