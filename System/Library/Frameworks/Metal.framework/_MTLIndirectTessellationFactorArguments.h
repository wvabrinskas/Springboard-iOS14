/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface _MTLIndirectTessellationFactorArguments : NSObject {

	void* _virtualAddress;
	unsigned long long _instanceStride;
	float _scale;

}

@property (assign,nonatomic) void* virtualAddress;                           //@synthesize virtualAddress=_virtualAddress - In the implementation block
@property (assign,nonatomic) unsigned long long instanceStride;              //@synthesize instanceStride=_instanceStride - In the implementation block
@property (assign,nonatomic) float scale;                                    //@synthesize scale=_scale - In the implementation block
-(void)setScale:(float)arg1 ;
-(void)setVirtualAddress:(void*)arg1 ;
-(unsigned long long)instanceStride;
-(void)setInstanceStride:(unsigned long long)arg1 ;
-(float)scale;
-(void*)virtualAddress;
@end

