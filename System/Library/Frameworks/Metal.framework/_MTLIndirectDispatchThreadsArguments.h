/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Metal/Metal-Structs.h>
@interface _MTLIndirectDispatchThreadsArguments : NSObject {

	SCD_Struct_MT31 _threadsPerGrid;
	SCD_Struct_MT31 _threadsPerThreadgroup;

}

@property (assign,nonatomic) SCD_Struct_MT31 threadsPerGrid;                     //@synthesize threadsPerGrid=_threadsPerGrid - In the implementation block
@property (assign,nonatomic) SCD_Struct_MT31 threadsPerThreadgroup;              //@synthesize threadsPerThreadgroup=_threadsPerThreadgroup - In the implementation block
-(SCD_Struct_MT31)threadsPerThreadgroup;
-(void)setThreadsPerThreadgroup:(SCD_Struct_MT31)arg1 ;
-(SCD_Struct_MT31)threadsPerGrid;
-(void)setThreadsPerGrid:(SCD_Struct_MT31)arg1 ;
@end
