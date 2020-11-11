/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:49 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PHResourceLocalAvailabilityRequest, NSString;

@interface PUPhotosGridDownloadHelpContext : NSObject {

	PHResourceLocalAvailabilityRequest* _resourceLocalAvailabilityRequest;
	NSString* _gridProgressIdentifier;
	/*^block*/id _downloadHandler;

}

@property (nonatomic,retain) PHResourceLocalAvailabilityRequest * resourceLocalAvailabilityRequest;              //@synthesize resourceLocalAvailabilityRequest=_resourceLocalAvailabilityRequest - In the implementation block
@property (nonatomic,retain) NSString * gridProgressIdentifier;                                                  //@synthesize gridProgressIdentifier=_gridProgressIdentifier - In the implementation block
@property (nonatomic,copy) id downloadHandler;                                                                   //@synthesize downloadHandler=_downloadHandler - In the implementation block
-(void)setDownloadHandler:(id)arg1 ;
-(NSString *)gridProgressIdentifier;
-(PHResourceLocalAvailabilityRequest *)resourceLocalAvailabilityRequest;
-(void)setResourceLocalAvailabilityRequest:(PHResourceLocalAvailabilityRequest *)arg1 ;
-(void)setGridProgressIdentifier:(NSString *)arg1 ;
-(id)downloadHandler;
@end
