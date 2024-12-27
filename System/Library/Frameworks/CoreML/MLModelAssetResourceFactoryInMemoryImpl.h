//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreML/MLModelAssetResourceFactoryImpl-Protocol.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface MLModelAssetResourceFactoryInMemoryImpl : NSObject <MLModelAssetResourceFactoryImpl>
{
    struct unique_ptr<_MLModelInputArchiver, std::default_delete<_MLModelInputArchiver>> _inputArchiver;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x00000000002cd69d
- (void).cxx_destruct;	// IMP=0x00000000002cd67d
- (id)modelStructureWithError:(id *)arg1;	// IMP=0x00000000002cd4d9
- (id)modelWithConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002cd45c
- (id)modelAssetDescriptionWithError:(id *)arg1;	// IMP=0x00000000002cd427
@property(readonly, copy, nonatomic) NSURL *compiledModelURL;
- (id)initWithArchiveData:(id)arg1;	// IMP=0x00000000002cd23a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

