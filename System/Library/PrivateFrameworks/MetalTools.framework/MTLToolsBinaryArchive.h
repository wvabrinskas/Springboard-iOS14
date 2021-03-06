/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MetalTools/MTLToolsObject.h>
#import <libobjc.A.dylib/MTLBinaryArchiveSPI.h>

@class NSArray, NSString;

@interface MTLToolsBinaryArchive : MTLToolsObject <MTLBinaryArchiveSPI>

@property (readonly) unsigned long long options; 
@property (readonly) NSArray * keys; 
@property (copy) NSString * label; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)keys;
-(NSString *)label;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(id<MTLDevice>)device;
-(BOOL)addComputePipelineFunctionsWithDescriptor:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)addRenderPipelineFunctionsWithDescriptor:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)addTileRenderPipelineFunctionsWithDescriptor:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)serializeToURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)addComputePipelineFunctionsWithDescriptor:(id)arg1 error:(id*)arg2 ;
-(BOOL)serializeToURL:(id)arg1 error:(id*)arg2 ;
-(id)getBinaryDataForKey:(id)arg1 ;
-(BOOL)addRenderPipelineFunctionsWithDescriptor:(id)arg1 error:(id*)arg2 ;
-(BOOL)addTileRenderPipelineFunctionsWithDescriptor:(id)arg1 error:(id*)arg2 ;
-(void)addBinaryEntry:(id)arg1 forKey:(id)arg2 ;
-(unsigned long long)options;
-(void)setLabel:(NSString *)arg1 ;
@end

