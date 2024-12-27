//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString, NSURL, NSUUID;

__attribute__((visibility("hidden")))
@interface UAPasteboardFileItemProvider : NSObject
{
    _Bool _preferFileRep;	// 8 = 0x8
    _Bool _isDir;	// 9 = 0x9
    NSString *_type;	// 16 = 0x10
    NSUUID *_uuid;	// 24 = 0x18
    NSURL *_fileURL;	// 32 = 0x20
    NSData *_sandboxExtension;	// 40 = 0x28
}

+ (_Bool)conformsToProtocol:(id)arg1;	// IMP=0x00100000000400c9
- (void).cxx_destruct;	// IMP=0x00000000000407f1
@property _Bool isDir; // @synthesize isDir=_isDir;
@property(retain) NSData *sandboxExtension; // @synthesize sandboxExtension=_sandboxExtension;
@property(retain) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(nonatomic) _Bool preferFileRep; // @synthesize preferFileRep=_preferFileRep;
@property(copy, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void)accessFileAtURLWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000004034d
- (void)getDataWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000040192
- (void)getDataFileWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000040180
- (id)getFileName;	// IMP=0x0000000000040130
- (id)initWithURL:(id)arg1 sandboxExtension:(id)arg2;	// IMP=0x000000000003fc0a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

