//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, NSURL;

@interface SKProductLookupResponse : NSObject
{
    _Bool _isEntitled;	// 8 = 0x8
    NSDictionary *_resultDictionary;	// 16 = 0x10
    NSString *_extensionBundleID;	// 24 = 0x18
    NSURL *_productURL;	// 32 = 0x20
    NSDictionary *_parameters;	// 40 = 0x28
    NSURL *_deepLinkURL;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000000e5b9
- (void).cxx_destruct;	// IMP=0x002000000000ebf5
@property(readonly, nonatomic) NSURL *deepLinkURL; // @synthesize deepLinkURL=_deepLinkURL;
@property(readonly, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(readonly, nonatomic) _Bool isEntitled; // @synthesize isEntitled=_isEntitled;
@property(readonly, nonatomic) NSURL *productURL; // @synthesize productURL=_productURL;
@property(readonly, nonatomic) NSString *extensionBundleID; // @synthesize extensionBundleID=_extensionBundleID;
@property(readonly, nonatomic) NSDictionary *resultDictionary; // @synthesize resultDictionary=_resultDictionary;
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000000e7f0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000000e5c1
- (id)initWithResult:(id)arg1 extensionID:(id)arg2 productURL:(id)arg3 isEntitled:(_Bool)arg4 parameters:(id)arg5 deepLinkURL:(id)arg6;	// IMP=0x001000000000e4b2

@end

