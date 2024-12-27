//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface DYIABPatcher : NSObject
{
    struct unordered_map<DYCommandBufferUID, std::set<BufferEntry>, DYCommandBufferUIDHash, std::equal_to<DYCommandBufferUID>, std::allocator<std::pair<const DYCommandBufferUID, std::set<BufferEntry>>>> _perfectPatchingTable;	// 8 = 0x8
    struct unordered_map<unsigned long long, std::vector<PatchingRequest>, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, std::vector<PatchingRequest>>>> _optimizedPatchingMap;	// 48 = 0x30
    struct DYCommandBufferUID _lastProcessedCommandBufferUid;	// 88 = 0x58
    int _patchingMode;	// 104 = 0x68
}

- (id).cxx_construct;	// IMP=0x0000000000012dce
- (void).cxx_destruct;	// IMP=0x0000000000012daa
@property(readonly, nonatomic) int patchingMode; // @synthesize patchingMode=_patchingMode;
- (_Bool)patchBuffer:(unsigned long long)arg1 bufferData:(void *)arg2 bufferLength:(unsigned long long)arg3 objectMap:(const void *)arg4;	// IMP=0x0000000000012b9b
- (_Bool)patchBuffers:(struct DYCommandBufferUID)arg1 objectMap:(const void *)arg2 commandQueue:(id)arg3;	// IMP=0x0000000000012973
- (void *)findPatchingRequest:(struct DYCommandBufferUID)arg1;	// IMP=0x0000000000012911
- (void)insertPatchingOp:(struct DYIABPatchingOp)arg1 commandBufferUid:(struct DYCommandBufferUID)arg2;	// IMP=0x00000000000128ba
- (_Bool)writePatchingTableAsJson:(id)arg1;	// IMP=0x00000000000124f4
- (_Bool)readPatchingTable:(id)arg1;	// IMP=0x000000000001196a
- (id)initWithPatchingMode:(int)arg1;	// IMP=0x000000000001192f

@end

