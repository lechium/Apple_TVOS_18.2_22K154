//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INFile.h>

@class NSString;

@interface INFile (Workflow)
+ (id)compatibleFileTypeForContentItem:(id)arg1 availableTypes:(id)arg2;	// IMP=0x0010000000584248
+ (void)coerceContentItems:(id)arg1 toSupportedUTIs:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000583f3a
+ (void)coerceContentItemsIfAppropriate:(id)arg1 toSupportedUTIs:(id)arg2 withParameterStates:(id)arg3 dynamicOptions:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0010000000583e88
+ (void)getINFileRepresentationsFromContent:(id)arg1 byCoercingToSupportedUTIs:(id)arg2 withParameterState:(id)arg3 dynamicOptions:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0010000000583c6e
+ (_Bool)wf_processParameterValue:(id)arg1 parameterState:(id)arg2 coerceToSupportedUTIs:(id)arg3 array:(_Bool)arg4 dynamicOptions:(_Bool)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0010000000583767
+ (Class)wf_contentItemClass;	// IMP=0x0010000000583756
+ (id)wf_fileWithBookmarkData:(id)arg1 filename:(id)arg2;	// IMP=0x00100000005836c4
+ (id)wf_fileWithFileRepresentation:(id)arg1 bookmarkData:(id)arg2 displayName:(id)arg3;	// IMP=0x001000000058350a
+ (id)wf_fileWithFileRepresentation:(id)arg1 displayName:(id)arg2;	// IMP=0x00100000005832e3
- (id)wf_fileRepresentation;	// IMP=0x0010000000582efe
- (void)wf_transformUsingCodableAttribute:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000582e4f
- (id)wf_contentItemWithCodableAttribute:(id)arg1;	// IMP=0x0010000000582dec
- (id)wf_initWithBookmarkData:(id)arg1 filename:(id)arg2 typeIdentifier:(id)arg3 removedOnCompletion:(id)arg4;	// IMP=0x0010000000582da3
- (id)wf_initWithData:(id)arg1 filename:(id)arg2 fileURL:(id)arg3 typeIdentifier:(id)arg4 removedOnCompletion:(id)arg5;	// IMP=0x0010000000582d49

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

