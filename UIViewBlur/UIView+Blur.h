//
//  UIView+Blur.h
//  UIViewBlurDemo
//
//  Created by Francesco Mattia on 11/03/2014.
//  Copyright (c) 2014 Francesco Mattia. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CABlurLayer : CALayer {
    float blur;
}

@property (nonatomic, assign) float blur;
@property (nonatomic, strong) NSArray *blurredSnapshots;

@end

@interface UIView (Blur)

@property (nonatomic, strong) CABlurLayer *blurredLayer;
@property (nonatomic, assign) float blur;

- (void)updateSnapshots;

@end
