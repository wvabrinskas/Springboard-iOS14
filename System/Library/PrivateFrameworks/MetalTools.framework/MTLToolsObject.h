/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class MTLToolsDevice;

@interface MTLToolsObject : NSObject {

	MTLToolsObject* _parent;
	MTLToolsObject* _baseObject;
	MTLToolsDevice* _device;
	Ai _externalReferences;

}

@property (nonatomic,retain) id baseObject;              //@synthesize baseObject=_baseObject - In the implementation block
@property (readonly) id<MTLDevice> device; 
-(id)parent;
-(id<MTLDevice>)device;
-(id)description;
-(id)originalObject;
-(id)initWithBaseObject:(id)arg1 parent:(id)arg2 ;
-(id)baseObject;
-(void)dealloc;
-(void)setOriginalObject:(id)arg1 ;
-(id)strongParent;
-(void)setBaseObject:(id)arg1 ;
@end

