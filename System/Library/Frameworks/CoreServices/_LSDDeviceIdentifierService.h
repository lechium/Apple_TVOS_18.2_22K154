//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _LSDDeviceIdentifierService
{
}

+ (id)XPCInterface;	// IMP=0x00800000000a8984
+ (Class)clientClass;	// IMP=0x00800000000a8973
+ (unsigned short)connectionType;	// IMP=0x00800000000a8968
+ (void)generateIdentifiersForInstallationWithContext:(struct LSContext *)arg1 bundleUnit:(unsigned int)arg2 bundleData:(const struct LSBundleData *)arg3;	// IMP=0x00800000000a87ff
+ (void)clearIdentifiersForUninstallationWithContext:(struct LSContext *)arg1 bundleUnit:(unsigned int)arg2 bundleData:(const struct LSBundleData *)arg3;	// IMP=0x00800000000a8711
+ (id)vendorNameForDeviceIdentifiersWithContext:(struct LSContext *)arg1 bundleUnit:(unsigned int)arg2 bundleData:(const struct LSBundleData *)arg3;	// IMP=0x00800000000a84a6

@end

