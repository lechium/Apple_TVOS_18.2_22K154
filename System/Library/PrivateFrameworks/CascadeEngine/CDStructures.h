//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct unique_ptr<std::__hash_node_base<std::__hash_node<long long, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<long long, void *>*>*>>> {
    struct __compressed_pair<std::__hash_node_base<std::__hash_node<long long, void *>*>**, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<long long, void *>*>*>>> {
        void **__value_;
        struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<long long, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<long long, void *>*>*>> {
                unsigned long long __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unordered_set<long long, std::hash<long long>, std::equal_to<long long>, std::allocator<long long>> {
    struct __hash_table<long long, std::hash<long long>, std::equal_to<long long>, std::allocator<long long>> {
        struct unique_ptr<std::__hash_node_base<std::__hash_node<long long, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<long long, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__hash_node_base<std::__hash_node<long long, void *>*>, std::allocator<std::__hash_node<long long, void *>>> {
            struct __hash_node_base<std::__hash_node<long long, void *>*> {
                void *__next_;
            } __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::hash<long long>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::equal_to<long long>> {
            float __value_;
        } __p3_;
    } __table_;
};

