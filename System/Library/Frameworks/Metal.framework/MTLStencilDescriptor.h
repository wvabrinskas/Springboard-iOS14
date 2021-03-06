/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MTLStencilDescriptor : NSObject <NSCopying>

@property (readonly) const MTLStencilDescriptorPrivate* stencilPrivate; 
@property (assign,nonatomic) unsigned long long stencilCompareFunction; 
@property (assign,nonatomic) unsigned long long stencilFailureOperation; 
@property (assign,nonatomic) unsigned long long depthFailureOperation; 
@property (assign,nonatomic) unsigned long long depthStencilPassOperation; 
@property (assign,nonatomic) unsigned readMask; 
@property (assign,nonatomic) unsigned writeMask; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)alloc;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

