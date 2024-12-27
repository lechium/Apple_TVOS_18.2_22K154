//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreML/NSObject-Protocol.h>

@class MLModelAssetDescription, MLModelConfiguration, MLVersionInfo;

@protocol MLModelAssetDescriptionLoader <NSObject>
+ (MLModelAssetDescription *)loadModelAssetDescriptionFromCompiledArchive:(void *)arg1 modelVersionInfo:(MLVersionInfo *)arg2 compilerVersionInfo:(MLVersionInfo *)arg3 configuration:(MLModelConfiguration *)arg4 error:(id *)arg5;
@end

