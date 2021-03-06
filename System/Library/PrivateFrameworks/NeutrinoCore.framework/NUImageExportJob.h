/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:42 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NeutrinoCore/NUExportJob.h>

@class NSData;

@interface NUImageExportJob : NUExportJob {

	NSData* _destinationData;

}
-(void)cleanUp;
-(BOOL)render:(out id*)arg1 ;
-(id)result;
-(id)renderer:(out id*)arg1 ;
-(BOOL)wantsOutputGeometry;
-(BOOL)wantsOutputImage;
-(id)initWithExportRequest:(id)arg1 ;
-(id)initWithImageExportRequest:(id)arg1 ;
-(id)imageExportRequest;
-(id)_filterProperties:(id)arg1 ;
-(id)imageDestinationOptions;
@end

