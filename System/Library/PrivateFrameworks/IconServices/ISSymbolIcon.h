//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "ISCodableIcon.h"

@class ISGraphicIconConfiguration, ISGraphicSymbolDescriptor, ISImageCache, NSString;

__attribute__((visibility("hidden")))
@interface ISSymbolIcon : ISCodableIcon
{
    NSString *_symbolName;	// 16 = 0x10
    ISGraphicIconConfiguration *_config;	// 24 = 0x18
    ISGraphicSymbolDescriptor *_graphicSymbolDescriptor;	// 32 = 0x20
    ISImageCache *_imageCache;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000000de08
- (void).cxx_destruct;	// IMP=0x000000000000ed3e
@property(readonly) ISImageCache *imageCache; // @synthesize imageCache=_imageCache;
@property(readonly) ISGraphicSymbolDescriptor *graphicSymbolDescriptor; // @synthesize graphicSymbolDescriptor=_graphicSymbolDescriptor;
@property(readonly, copy, nonatomic) ISGraphicIconConfiguration *config; // @synthesize config=_config;
@property(readonly) NSString *symbolName; // @synthesize symbolName=_symbolName;
- (id)description;	// IMP=0x000000000000ebe1
- (void)getImageForImageDescriptor:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000eaee
- (id)imageForImageDescriptor:(id)arg1;	// IMP=0x000000000000e981
- (void)_prepareImagesForImageDescriptors:(id)arg1;	// IMP=0x000000000000e6c6
- (id)_specUpdatedDescriptorForDescriptor:(id)arg1;	// IMP=0x000000000000e5e1
- (id)_generateImageWithDescriptor:(id)arg1;	// IMP=0x000000000000e34a
- (id)symbol;	// IMP=0x000000000000e2df
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000e1b6
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000df11
- (id)initWithSymbolName:(id)arg1 configuration:(id)arg2;	// IMP=0x000000000000de24
- (id)initWithSymbolName:(id)arg1;	// IMP=0x000000000000de10

@end

