//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GPUToolsCapture/MTLDynamicLibrary-Protocol.h>

@class MTLDebugInstrumentationData, NSArray, NSObject, NSString, NSURL;
@protocol OS_dispatch_data;

@protocol MTLDynamicLibrarySPI <MTLDynamicLibrary>
@property(readonly, nonatomic) _Bool shaderValidationEnabled;
@property(retain, nonatomic) MTLDebugInstrumentationData *debugInstrumentationData;
@property(copy, nonatomic) NSArray *relocations;
@property(readonly) const CDStruct_5af0f983 *libraryUUID;
@property(readonly) NSString *libraryPath;
@property(readonly) NSArray *importedLibraries;
@property(readonly) NSArray *importedSymbols;
@property(readonly) NSArray *exportedVariables;
@property(readonly) NSArray *exportedFunctions;
@property(readonly) NSObject<OS_dispatch_data> *reflectionData;
@property(readonly) NSObject<OS_dispatch_data> *binaryData;
- (NSString *)formattedDescription:(unsigned long long)arg1;
- (_Bool)serializeToURL:(NSURL *)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
@end

