//
//  ViewController.swift
//  my_application
//
//  Created by user913027 on 8/21/18.
//  Copyright © 2018 user913027. All rights reserved.
//

import UIKit
import AdinCube

class ViewController: UIViewController {

    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view, typically from a nib.
        AdinCube.userConsent().ask(self)
        
        // Create buttons
        let button1 = UIButton(frame: CGRect(x: 100, y: 100, width: 200, height: 50))
        button1.backgroundColor = .blue
        button1.setTitle("Show Interstitial Ad", for: .normal)
        button1.addTarget(self, action: #selector(button1Action), for: .touchUpInside)
        
        self.view.addSubview(button1)
        button1.center = CGPoint(x: self.view.center.x, y: self.view.center.y - 50)
        
        let button2 = UIButton(frame: CGRect(x: 100, y: 100, width: 200, height: 50))
        button2.backgroundColor = .blue
        button2.setTitle("Show Banner Ad", for: .normal)
        button2.addTarget(self, action: #selector(button2Action), for: .touchUpInside)
        
        self.view.addSubview(button2)
        button2.center = CGPoint(x: self.view.center.x, y: self.view.center.y + 50)
       
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }
    @objc func button1Action(sender: UIButton!) {
        AdinCube.interstitial().show(self) // self = current view controller
    }
    
    @objc func button2Action(sender: UIButton!) {
        // Create a banner view
        let bannerView = AdinCube.banner().createView(AdinCubeBannerSizeAuto, rootViewController: self)!
        self.view.addSubview(bannerView) // self = current view controller
        AdinCube.banner().load(bannerView)
    }

}

