//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSString;
@protocol MTLBuffer, MTLTexture;

@interface _TtC3VFX15VFXEntityObject : NSObject
{
    MISSING_TYPE *entity;	// 8 = 0x8
    MISSING_TYPE *referencedEntityManager;	// 16 = 0x10
    MISSING_TYPE *localEntityManager;	// 24 = 0x18
    MISSING_TYPE *_isTombstoned;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000653350
- (id)init;	// IMP=0x0000000000654a70
- (void)updateBridgedReferencesWithBridgeable:(id)arg1 objectByIdentifier:(id)arg2;	// IMP=0x0000000000654970
- (id)copyWithZone:(void *)arg1;	// IMP=0x0000000000654380
@property(nonatomic, copy) NSString *tag;
- (void)dealloc;	// IMP=0x0000000000653330
@property(nonatomic, readonly) NSString *description;
- (id)init:(long long)arg1 privateEntityManager:(id)arg2;	// IMP=0x0000000000652b50
- (id)init:(long long)arg1 sharedEntityManager:(id)arg2;	// IMP=0x00000000006529e0
@property(nonatomic, readonly) long long objectID;
- (id)_valueForKeyPath:(id)arg1 world:(id)arg2;	// IMP=0x0000000000715ba0
- (_Bool)_setValue:(id)arg1 forKeyPath:(id)arg2;	// IMP=0x0000000000715220
- (void)restart;	// IMP=0x00000000007147d0
- (void)killParticles;	// IMP=0x00000000007141f0
@property(nonatomic, readonly) _Bool isLocal;
@property(nonatomic, readonly) NSString *textureAbsolutePath;
@property(nonatomic) _Bool isEnabled;
@property(nonatomic) MISSING_TYPE *scale;
@property(nonatomic) CDStruct_183601bc orientation;
@property(nonatomic) MISSING_TYPE *position;
@property(nonatomic) float opacity;
- (void)setBeamed;	// IMP=0x0000000000712d80
@property(nonatomic) CDStruct_14d5dc5e transform;
@property(nonatomic, readonly) long long particleDataBufferOffset;
@property(nonatomic, readonly) id <MTLBuffer> particleDataBuffer;
@property(nonatomic, readonly) long long particleHeaderBufferOffset;
@property(nonatomic, readonly) id <MTLBuffer> particleHeaderBuffer;
@property(nonatomic, readonly) NSArray *intersectionFunctions;
@property(nonatomic, readonly) NSArray *bindings;
@property(nonatomic, retain) struct CGImage *clientCGImage;
@property(nonatomic, retain) id <MTLTexture> clientTexture;
@property(nonatomic, readonly) NSArray *presentationBindings;
- (void)addTo:(id)arg1;	// IMP=0x0000000000710a90
- (void)removeFromScene;	// IMP=0x00000000007109f0

@end

