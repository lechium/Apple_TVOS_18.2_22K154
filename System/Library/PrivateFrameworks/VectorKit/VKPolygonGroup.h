//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VKPolygonGroup
{
    struct optional<md::MeshSet<ggl::PolygonCommonStroke::MeshMesh, ggl::PolygonCommonStroke::DefaultVbo>> _strokeMeshInfo;	// 2664 = 0xa68
    struct vector<std::shared_ptr<ggl::PolygonCommonStroke::MeshMesh>, std::allocator<std::shared_ptr<ggl::PolygonCommonStroke::MeshMesh>>> _strokeMeshes;	// 2856 = 0xb28
    shared_ptr_479d1306 _sourceTexture;	// 2880 = 0xb40
    shared_ptr_479d1306 _targetTexture;	// 2896 = 0xb50
    shared_ptr_479d1306 _sourceRoofTexture;	// 2912 = 0xb60
    shared_ptr_479d1306 _targetRoofTexture;	// 2928 = 0xb70
    unsigned char _lastResolvedZoom;	// 2944 = 0xb80
}

- (id).cxx_construct;	// IMP=0x00000000010116e0
- (void).cxx_destruct;	// IMP=0x0000000001011570
- (void)updateTextures:(unsigned char)arg1 textureManager:(void *)arg2;	// IMP=0x0000000001010e00
- (void)addStrokeForSection:(const void *)arg1 paddedCount:(unsigned int)arg2 key:(pair_802f950e)arg3 attributes:(const void *)arg4 styles:(void *)arg5 cullingMask:(unsigned int)arg6 accessor:(struct ResourceAccessor *)arg7;	// IMP=0x0000000001010840
- (unsigned char)initialStyleIndexForSection:(const void *)arg1 attributes:(const void *)arg2 styles:(const void *)arg3;	// IMP=0x00000000010107e0
- (unsigned char)styleIndexForAttributes:(const void *)arg1 edgePair:(const struct GeoCodecsFeatureStylePair *)arg2;	// IMP=0x00000000010106a0
- (_Bool)addFillForSection:(const void *)arg1 precision:(unsigned char)arg2 styleIndex:(unsigned int)arg3 cullingMask:(unsigned int)arg4 accessor:(struct ResourceAccessor *)arg5 triangulator:(void *)arg6;	// IMP=0x0000000001010510
- (void)addPolygon:(void *)arg1 accessor:(struct ResourceAccessor *)arg2 triangulator:(void *)arg3 withRounder:(struct PolygonRound *)arg4;	// IMP=0x0000000001010250
- (void)didFinishAddingData;	// IMP=0x000000000100ff70
- (void)willAddDataWithAccessor:(struct ResourceAccessor *)arg1;	// IMP=0x000000000100f340
- (void)prepareToStrokeSection:(const void *)arg1 key:(const void *)arg2 styles:(void *)arg3 paddedCount:(unsigned int)arg4;	// IMP=0x000000000100ec40
- (void)prepareToFillSection:(const void *)arg1;	// IMP=0x000000000100ec20
- (void)enclosePointsInBoundingBox:(const void *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000100eb80
- (void)prepareForPolygon:(void *)arg1 withRounder:(struct PolygonRound *)arg2;	// IMP=0x000000000100e6c0
- (unsigned int)createStrokePointStyleList:(void *)arg1 section:(unsigned long long)arg2 outPointStyles:(void *)arg3 withRounder:(struct PolygonRound *)arg4;	// IMP=0x000000000100df40
@property(readonly, nonatomic) void *strokeMeshes;
- (void)updateTexturesIfNecessary:(float)arg1 textureManager:(void *)arg2;	// IMP=0x000000000100df00
- (void)setNeedsTextureUpdate;	// IMP=0x000000000100dee0
@property(readonly, nonatomic) struct FeatureAttributeSet styleAttributes;
- (shared_ptr_479d1306)_textureForName:(const void *)arg1 textureManager:(void *)arg2;	// IMP=0x000000000100dd20
- (id)initWithStyleQuery:(void *)arg1 tileZoom:(float)arg2 fixedAroundCentroid:(const void *)arg3 contentScale:(float)arg4 storage:(shared_ptr_fb8448a7)arg5;	// IMP=0x000000000100d500
- (id)initWithStyleQuery:(void *)arg1 tileZoom:(float)arg2 fixedAroundCentroid:(const void *)arg3 contentScale:(float)arg4;	// IMP=0x000000000100d470
@property(readonly, nonatomic) void *targetRoofTexture;
@property(readonly, nonatomic) void *sourceRoofTexture;
@property(readonly, nonatomic) void *targetTexture;
@property(readonly, nonatomic) void *sourceTexture;

@end

