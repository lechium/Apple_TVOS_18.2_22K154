//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _EXSandboxExtension : NSObject
{
    unsigned long long _consumedSandboxExtension;	// 8 = 0x8
    NSString *_sandboxExtensionToken;	// 16 = 0x10
}

+ (_Bool)sandboxed;	// IMP=0x001000000002b707
+ (_Bool)supportsSecureCoding;	// IMP=0x001000000002b6ff
- (void).cxx_destruct;	// IMP=0x000000000002bc70
@property(retain) NSString *sandboxExtensionToken; // @synthesize sandboxExtensionToken=_sandboxExtensionToken;
@property unsigned long long consumedSandboxExtension; // @synthesize consumedSandboxExtension=_consumedSandboxExtension;
- (_Bool)consume;	// IMP=0x000000000002ba6e
- (void)dealloc;	// IMP=0x000000000002ba2e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002ba0b
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002b972
- (id)initWithURL:(id)arg1 readonly:(_Bool)arg2;	// IMP=0x000000000002b89a
- (id)initWithExtensionClass:(id)arg1 machServiceName:(id)arg2 process:(CDStruct_4c969caf)arg3;	// IMP=0x000000000002b78f
- (id)init;	// IMP=0x000000000002b753

@end

