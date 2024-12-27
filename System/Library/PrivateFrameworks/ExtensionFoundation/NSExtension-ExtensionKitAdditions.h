//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSExtension.h>

@class LSApplicationExtensionRecord, NSArray, NSString, NSURL, NSUUID;

@interface NSExtension (ExtensionKitAdditions)
+ (id)extensionInfoForCurrentProcess;	// IMP=0x002000000003a208
+ (id)extensionWithIdentity:(id)arg1 error:(id *)arg2;	// IMP=0x0020000000039cfa
+ (id)extensionRepresentedBy:(id)arg1 error:(id *)arg2;	// IMP=0x0020000000039a2a
@property(readonly) LSApplicationExtensionRecord *extensionRecord; // @dynamic extensionRecord;
@property(readonly) NSURL *URL; // @dynamic URL;
@property(readonly) NSUUID *uuid; // @dynamic uuid;
@property(readonly, copy) NSArray *_personas; // @dynamic _personas;
- (void)beginExtensionRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000003a233
- (id)beginExtensionRequest:(id)arg1 error:(id *)arg2;	// IMP=0x001000000003a221
@property(readonly, nonatomic) NSString *containingBundleIdentifier;
@property(readonly) _Bool requiresMacCatalystBehavior;
@property(retain, nonatomic) NSArray *preferredLanguages;
- (id)extensionIdentityWithError:(id *)arg1;	// IMP=0x0010000000039d13
@end

