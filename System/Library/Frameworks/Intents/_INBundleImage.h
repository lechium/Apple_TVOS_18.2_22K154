//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "INImage.h"

@class INImageBundle, NSString;

__attribute__((visibility("hidden")))
@interface _INBundleImage : INImage
{
    NSString *_imageName;	// 8 = 0x8
    INImageBundle *_imageBundle;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000002e649c
- (void).cxx_destruct;	// IMP=0x00000000002e646b
@property(copy, nonatomic) INImageBundle *imageBundle; // @synthesize imageBundle=_imageBundle;
@property(copy, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002e6338
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002e6299
- (_Bool)_isSystem;	// IMP=0x00000000002e6250
- (void)_setBundleIdentifier:(id)arg1;	// IMP=0x00000000002e61e7
- (id)_bundleIdentifier;	// IMP=0x00000000002e6197
- (void)_setBundlePath:(id)arg1;	// IMP=0x00000000002e612e
- (id)_bundlePath;	// IMP=0x00000000002e60de
- (void)_setName:(id)arg1;	// IMP=0x00000000002e60cc
- (id)_name;	// IMP=0x00000000002e60ba
- (id)_copyWithSubclass:(Class)arg1;	// IMP=0x00000000002e5fb0
- (id)_dictionaryRepresentation;	// IMP=0x00000000002e5e86
- (_Bool)_requiresRetrieval;	// IMP=0x00000000002e5e7e
- (id)_identifier;	// IMP=0x00000000002e5e6c
- (id)stringRepresentation;	// IMP=0x00000000002e5c44
- (id)initWithStringRepresentation:(id)arg1;	// IMP=0x00000000002e5bea
- (id)_URLRepresentation;	// IMP=0x00000000002e5b87
- (id)_initWithURLRepresentation:(id)arg1;	// IMP=0x00000000002e55a7
- (void)_loadImageDataAndSizeWithHelper:(id)arg1 accessSpecifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000002aec42

@end

