//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface NLE5Embedding : NSObject
{
    int _numInputs;	// 8 = 0x8
    void *_subwordVocabRef;	// 16 = 0x10
    unique_ptr_ac6eeb09 _programLibrary;	// 24 = 0x18
    struct unique_ptr<E5RT::ExecutionStream, std::default_delete<E5RT::ExecutionStream>> _stream;	// 32 = 0x20
    struct shared_ptr<E5RT::ExecutionStreamOperation> _main_esop;	// 40 = 0x28
    struct unordered_map<std::string, std::shared_ptr<E5RT::BufferObject>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::shared_ptr<E5RT::BufferObject>>>> _buffers;	// 56 = 0x38
    NSString *_loadedFunction;	// 96 = 0x60
    unsigned long long _dimension;	// 104 = 0x68
    unsigned long long _maximumSequenceLength;	// 112 = 0x70
    NSArray *_adapters;	// 120 = 0x78
}

+ (id)logCategory;	// IMP=0x001000000001b0e2
+ (_Bool)compileEmbeddingModelWithModelPath:(id)arg1 useANE:(_Bool)arg2 adapters:(id)arg3;	// IMP=0x0010000000017685
+ (_Bool)isCompiledEmbeddingModelWithModelPath:(id)arg1 useANE:(_Bool)arg2 adapters:(id)arg3 error:(id *)arg4;	// IMP=0x001000000001668a
+ (id)embeddingModelWithModelPath:(id)arg1 useANE:(_Bool)arg2 adapters:(id)arg3;	// IMP=0x0010000000015814
- (id).cxx_construct;	// IMP=0x000000000001b1a5
- (void).cxx_destruct;	// IMP=0x000000000001b139
@property(retain) NSArray *adapters; // @synthesize adapters=_adapters;
@property(readonly) unsigned long long maximumSequenceLength; // @synthesize maximumSequenceLength=_maximumSequenceLength;
@property(readonly) unsigned long long dimension; // @synthesize dimension=_dimension;
- (id)_tokenIDsForText:(id)arg1 addBOS:(_Bool)arg2;	// IMP=0x000000000001b0c7
- (id)tokenIDsForText:(id)arg1;	// IMP=0x000000000001af08
- (id)textForTokenIDs:(id)arg1;	// IMP=0x000000000001ad5f
- (id)embeddingDataForString:(id)arg1 sequenceSize:(unsigned long long *)arg2 error:(id *)arg3;	// IMP=0x000000000001a577
- (id)embeddingDataForTokenizedBatch:(id)arg1 withOutputProperties:(id)arg2;	// IMP=0x0000000000019922
- (_Bool)loadAdapter:(id)arg1;	// IMP=0x0000000000019413
- (_Bool)isAdapterLoaded:(id)arg1;	// IMP=0x00000000000193b3
- (_Bool)loadBackbone;	// IMP=0x000000000001903e
- (_Bool)isBackboneLoaded;	// IMP=0x0000000000018fbc
- (void)_setInputFragments:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000018ec1
- (_Bool)_loadFunction:(const char *)arg1;	// IMP=0x0000000000017d0c
- (void)dealloc;	// IMP=0x000000000001579e
- (id)initWithProgramLibrary:(unique_ptr_ac6eeb09)arg1 andSubwordVocab:(void *)arg2;	// IMP=0x0000000000015704

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

