//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Catalyst/CATOperation.h>

@class CEMImageAssetInstallMetadata, CEMImageDeclaration;

@interface CEMImageRemoveOperation : CATOperation
{
    CEMImageDeclaration *_imageDeclaration;	// 8 = 0x8
    CEMImageAssetInstallMetadata *_installMetadata;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000006305
@property(retain, nonatomic) CEMImageAssetInstallMetadata *installMetadata; // @synthesize installMetadata=_installMetadata;
@property(retain, nonatomic) CEMImageDeclaration *imageDeclaration; // @synthesize imageDeclaration=_imageDeclaration;
- (void)main;	// IMP=0x0010000000006195
- (id)initWithImageDeclaration:(id)arg1 installMetadata:(id)arg2;	// IMP=0x00100000000060f3

@end

